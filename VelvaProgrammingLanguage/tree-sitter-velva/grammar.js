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
            $.pure_function_declare,
            $.for,
            $.while
        ),
        
        // declaring a normal function
        function_declare: $ => seq(
            "func",
            $.primitive_type,
            $.identifier,
            $.parameter_list,  
            $.block
        ),
        
        // declaring a pure function
        pure_function_declare: $ => seq(
            "pure",
            $.primitive_type,
            $.identifier,
            $.parameter_list,
            $.block
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
            $.primitive_type,
            $.identifier,
            '=',
            $.expression,
            
        ),

        //expressions
        expression: $ => choice(
            $.identifier,
            $.binary_expression,
            $._unary_expression,
            $.number
        ),

        // includes not function and integer invert function
        _unary_expression: $ => choice(
            $.not,
            $.negative
            // more can be added later
        ),

        not: $ => seq(
            "!",
            $.identifier
        ),

        negative: $ => seq(
            "-",
            $.identifier
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

        assignment: $ => choice(
            seq(
                $.identifier,
                "=",
                $.expression,
            ),
        ),

        // types
        primitive_type: $ => choice(
            'int',
            'float'
        ),

        //functions
        parameter: $ => seq(
            $.primitive_type,
            $.identifier
        ),

        parameter_list: $ => seq(
            "(",
            //repeat($.parameter),
            ")"
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
            $.expression
        ), 

        func_call: $ => seq(
            $.identifier,
            "()"
        ),

        identifier: $ => /[a-z]+/,
        number: $ => /\d+/,
    }
});