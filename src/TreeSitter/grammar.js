module.exports = grammar({
    name: "Velva",
    rules: {
        // general file wrapper
        file: $ => repeat($._statement),

        // wrapper for each statement (hidden)
        _statement: $ => choice(
            $.if_statement,
            $.var_declaration,
            seq($.assignment, $._endLn),
            $.return_statement,
            seq($.func_call, $._endLn),
            $.function_declare,
            $.for,
            $.classVarDecl,
            $.while,
            $._singleComment,
            $._multiLineComment,
            $.classDecl,
            $.ClassVarDecl,
            $.classAssign
        ),

        _singleComment: $ => seq('//', /.*/),

        _multiLineComment: $ => seq(
            '/*',
            repeat(/./),
            '*/'
        ),

        ClassVarDecl: $ => prec(3, seq(
            $.identifier,
            $.identifier,
            '(',
            commaSep($.expression),
            ')',
            $._endLn
        )),


        ternaryStatement: $ => seq(
            $.condition,
            '?',
            $.expression,
            ':',
            $.expression
        ),
        
        // for loop.
        for: $ => seq(
            "for",
            "(",
            $.var_declaration,
            $.condition,
            ';',
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
        block: $ => choice(
            seq(
                "{",
                repeat($._statement),
                "}"
            ),
            // $._statement
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
            field("type", choice($.primitive_type, "auto")),
            field("name", $.identifier),
            optional(
                seq(
                    '=',
                    field("value", $.expression),
                )
            ),
            $._endLn, 
        ),

        //expressions
        expression: $ => choice(
            $.ternaryStatement,
            $.identifier,
            $.binary_expression,
            $._unary_expression,
            $.number,
            $.bool,
            $.func_call,
            $.string,
            $.parathensisExpr
        ),

        parathensisExpr: $ => prec(2, seq(
            '(',
            choice($.expression, $.binary_expression),
            ')'
        )),

        // includes not function and integer invert function
        _unary_expression: $ => choice(
            $.not,
            $.negative
            // more can be added later
        ),

        not: $ => seq(
            "!",
            choice($.identifier, $.bool)
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
            $.inc_dec,
        ),

        // increment and decrement for assignment
        inc_dec: $ => seq(
            $.identifier,
            choice("++", "--"),
            $._endLn
        ),
        
        publicPrivate: $ => choice("public:", "private:"),
        
        classVarDecl: $ => seq(
            $.primitive_type,
            $.identifier,
            optional(
                seq(
                    '=',
                    $.expression
                )
            ),
            $._endLn
        ),
        
        constructor: $ => seq(
            "init",
            $.parameter_list,  
            $.block
        ),

        classAssign: $ => seq(
            $.identifier, 
            '.',
            $.identifier,
            '=',
            $.expression
        ),
        
        classDecl: $ => seq(
            'class',
            $.identifier,
            '{',
            repeat(
                choice(
                    $.classVarDecl,
                    $.function_declare,
                    $.publicPrivate,
                    $.constructor
                )
            ),
            '}'
        ),

        // binary expression (needs testing)
        binary_expression: $ => choice(
            prec.left(3, $.parathensisExpr),
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
            'bool',
            'char', // string is actually not... a primitive type. stupid young beshaan
            $.identifier // might be a class 
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
        
        function_forward_decl: $ => seq(
            "forward",
            $.primitive_type,
            $.identifier 
        ),

        func_call: $ => seq(
            optional(seq($.identifier, '.')),
            $.identifier,
            '(',
            commaSep($.expression),
            ')'
        ),


        // conditionals

        _if_continuation: $ => choice(
            prec.left(2, $.else_if),
            prec.left(1, $.else)
        ),

        else: $ => seq(
            "else",
            $.block,
        ),

        else_if: $ => seq(
            "else",
            $.if_statement
        ),

        and: $ => choice("and", "&&"),
        or: $ => choice("or", "||"),

        binary_condition: $ => choice(
            prec.left(2, seq($.condition, $.and, $.condition)),
            prec.left(1, seq($.condition, $.or, $.condition))
        ),

        condition: $ => choice(
            prec.left(4, seq('(', $.condition, ')')),
            prec.left(3, seq($.expression, $.comparison_op, $.expression)),
            prec.left(2, $.binary_condition),
            prec.left(1, choice($.identifier, $.bool))
        ),

        comparison_op: $ => choice(
            "==", "!=", "<", ">", "<=", ">="
        ),

        return_statement: $ => seq(
            "return",
            optional($.expression),
            $._endLn
        ),
        
        string: $ => seq(
            "\"",
            field("content", repeat(/./)),
            "\""   
        ),
        _endLn: $ => choice(
            "\n", 
            ";",
        ), 
        anyVal: $ => /.*/,
        identifier: $ => /[a-zA-Z]+/,
        number: $ => /[+-]?(\d+([.]\d*)?([eE][+-]?\d+)?|[.]\d+([eE][+-]?\d+)?)/,
        true: $ => choice("true", "True"),
        false: $ => choice("false", "False"),
        bool: $ => choice($.true, $.false)
    }
});


// Definitely not copied from tree-sitter-cpp
function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}