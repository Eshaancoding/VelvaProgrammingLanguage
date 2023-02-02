module.exports = grammar({
    name: "Velva",
    rules: {

        file: $ => repeat($.statement),

        statement: $ => choice(
            $.if_statement,
            $.var_declaration,
            $.assignment,
            $.block,
            // $._return_statement,
            //$._func_call,
        ),

        // function_declare: $ => seq(
        //     "func",
        //     $._primitive_type,
        //     $.identifier,
        //     $._parameter_list,  
        //     $.block
        // ),

        // pure_function_declare: $ => seq(
        //     "pure",
        //     $._primitive_type,
        //     $.identifier,
        //     $._parameter_list,
        //     $.block
        // ),

        // for: $ => seq(
        //     "for",
        //     "(",
        //     $.var_declaration,
        //     ";",
        //     $._condition,
        //     ";",
        //     $._assignment,
        //     ")",
        //     $.block
        // ),

        // while: $ => seq(
        //     "while",
        //     "(",
        //     $._condition,
        //     ")",
        //     $.block,
        // ),

        if_statement: $ => seq(
            "if",
            "(",
            $.condition,
            ")",
            $.block,
            optional($._if_continuation)
        ),

        block: $ => seq(
            "{",
            repeat($.statement),
            "}"
        ),

        // variable declaration, assignment, manipulation
        var_declaration: $ => seq(
            $._primitive_type,
            $.identifier,
            '=',
            $.expression,
            
        ),

        //expressions
        expression: $ => choice(
            $.identifier,
            $._binary_expression,
            $._unary_expression,
            $.number
        ),

        _unary_expression: $ => choice(
            $._not
            // more can be added later
        ),

        _not: $ => seq(
            "!",
            $.identifier
        ),

        _inc_dec: $ => seq(
            $.identifier,
            choice("++", "--")
        ),

        _binary_expression: $ => choice(
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
            $._inc_dec
        ),

        // types
        _primitive_type: $ => choice(
            'int',
            'float'
        ),

        //functions
        //_parameter: $ => seq(
        //     $._primitive_type,
        //     $.identifier
        // ),

        // _parameter_list: $ => seq(
        //     "(",
        //     repeat($._parameter),
        //     ")"
        // ),
        
        // // general block & statements (probably need to be updated), used in loops, conditionals, functions

        // conditionals

        _if_continuation: $ => choice(
            $._else_if,
            $._else,
        ),

        _else: $ => seq(
            "else",
            $.block,
        ),

        _else_if: $ => seq(
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

        // _return_statement: $ => seq(
        //     "return",
        //     $._expression
        // ), 

        // func_call: $ => seq(
        //     $.identifier,
        //     "()"
        // ),

        identifier: $ => /[a-z]+/,
        number: $ => /\d+/,
    }
});