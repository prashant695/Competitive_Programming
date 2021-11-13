class Robot
{
public:
    int d = 1, x = 0, y = 0, r, c, f = 0;
    Robot(int width, int height)
    {
        r = height;
        c = width;
        r--;
        c--;
    }

    void move(int num)
    {

        num = num % (r + c + r + c);

        while (num > 0)
        {
            if (x == 0 and num > 0)
            {
                if (num <= (c - y))
                    y += num, d = 1, num = 0;
                else
                    num -= (c - y), d = 1, y = c;
            }

            if (y == c and num > 0)
            {
                if (num <= (r - x))
                    x += num, d = 2, num = 0;
                else
                    num -= (r - x), d = 2, x = r;
            }

            if (x == r and num > 0)
            {
                if (num <= (y))
                    y -= num, d = 3, num = 0;
                else
                    num -= (y), d = 3, y = 0;
            }
            if (y == 0 and num > 0)
            {
                if (num <= (x))
                    x -= num, d = 4, num = 0;
                else
                    num -= (x), d = 4, x = 0;
            }
        }
        if (f and x == 0 and y == 0)
            d = 4;

        f = 1;
    }

    vector<int> getPos()
    {
        return {y, x};
    }

    string getDir()
    {
        if (d == 1)
            return "East";
        else if (d == 2)
            return "North";
        else if (d == 3)
            return "West";
        return "South";
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->move(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */