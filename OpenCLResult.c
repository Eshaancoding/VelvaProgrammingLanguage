
    void helloThere(int x, int i)
    {
        int glob_id = get_global_id(0);
        int x = 2;
        float v = 3.000000;
        double db = 6.000000;
        char ch = 'h';
        int bin = ((3 + (3 * x)) + (x == 2) ? 6 : 2);
        bin = 3;
        for (int x = 0; (x < 6); x = (x + 1))
        {
            bin = (bin + x);
        }
        int teh = 0;
        while (teh < 5)
        {
            bin = (bin + 1);
            teh = (teh + 1);
        }
        int result = 0;
        if (teh == 3)
        {
            result = 2;
        }
        else if (teh == 6)
        {
            result = 23;
        }
        else if (teh == 23)
        {
            result = 46;
        }
        else
        {
            result = 123;
        }
        int *p = &x;
        a[0] = 3;
        float4 x = 3;
    }