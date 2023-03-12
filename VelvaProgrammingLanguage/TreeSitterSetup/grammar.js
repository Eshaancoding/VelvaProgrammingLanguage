module.exports = grammar({
    name: "Velva",
    rules: {
        // general file wrapper
        file: $ => repeat($._statement),

        // wrapper for each statement (hidden)
        _statement: $ => choice(
            $.if_statement,
            $.var_declaration,
            $.assignment,
            $.block,
            $.return_statement,
            $.func_call,
            $.function_declare,
            $.for,
            $.while
        ),
        
        // for loop
        for: $ => seq(
            "for",
            "(",
            $.var_declaration,
            ";",
            $.condition,
            ";",
            $.assignment,
            ")",
            $.block
        ),

        // while loop
        while: $ => seq(
            "while",
            "(",
            $.condition,
            ")",
            $.block,
        ),

        // block with curly braces (used in conditionals, loops, and functions, but can also be included to group a scope)
        block: $ => seq(
            "{",
            repeat($._statement),
            "}"
        ),

        // conditional
        if_statement: $ => seq(
            "if",
            "(",
            $.condition,
            ")",
            $.block,
            optional($._if_continuation)
        ),

        // variable declaration, assignment, manipulation
        var_declaration: $ => seq(
            field("type", $.primitive_type),
            field("name", $.identifier),
            '=',
            field("value", $.expression),
            
        ),

        //expressions
        expression: $ => choice(
            $.identifier,
            $.binary_expression,
            $._unary_expression,
            $.number,
            $.boolean
        ),

        // includes not function and integer invert function
        _unary_expression: $ => choice(
            $.not,
            $.negative
            // more can be added later
        ),

        not: $ => seq(
            "!",
            choice($.identifier, $.boolean)
        ),

        negative: $ => seq(
            "-",
            $.identifier
        ),

        assignment: $ => choice(
            seq(
                $.identifier,
                "=",
                $.expression,
            ),
            $.inc_dec
        ),

        // increment and decrement for assignment
        inc_dec: $ => seq(
            $.identifier,
            choice("++", "--")
        ),

        // binary expression (needs testing)
        binary_expression: $ => choice(
            prec.left(2, seq($.expression, '*', $.expression)),
            prec.left(2, seq($.expression, '/', $.expression)),
            prec.left(1, seq($.expression, '-', $.expression)),
            prec.left(1, seq($.expression, '+', $.expression)),
        ),

        // _operator: $ => choice(
        //     "+", "-", "*", "/"
        // ),

        // types
        primitive_type: $ => choice(
            'int',
            'float',
            'bool'
        ),

        //functions
        parameter: $ => seq(
            $.primitive_type,
            $.identifier
        ),

        parameter_list: $ => seq(
            "(",
            commaSep($.parameter),
            ")"
        ),
        
        function_declare: $ => seq(
            optional('pure'),
            choice("func", $.primitive_type),
            $.identifier,
            $.parameter_list,  
            $.block
        ),

        // // general block & statements (probably need to be updated), used in loops, conditionals, functions

        // conditionals

        _if_continuation: $ => choice(
            $.else_if,
            $.else,
        ),

        else: $ => seq(
            "else",
            $.block,
        ),

        else_if: $ => seq(
            "else",
            $.if_statement
        ),

        condition: $ => seq(
            $.expression,
            $.comparison_op,
            $.expression,
        ),

        comparison_op: $ => choice(
            "==", "!=", "<", ">", "<=", ">="
        ),

        return_statement: $ => seq(
            "return",
            choice($.expression, '\n')
        ),

        argument: $ => seq(
            $.expression, 
        ),

        func_call: $ => seq(
            $.identifier,
            '(',
            commaSep($.argument),
            ')'
        ),

        identifier: $ => /[a-z]+/,
        number: $ => /\d+/,
        boolean: $ => choice("true", "false")
    }
});


// Definitely not copied & pasted from tree-sitter-cpp
function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}