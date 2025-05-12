
       //  #include <iostream>
       // using namespace std;

       // void func1(int &, int &);
        //void func2(int &, int &, int &);
        //void func3(int, int, int);

        //int main()
        //{
          //  int x = 0, y = 0, z = 0;
          //  cout << x << " " << y << " " << z << endl;
            //func1(x, y);
          //  cout << x << " " << y << " " << z << endl;
          //  func2(x, y, z);
          //  cout << x << " " << y << " " << z << endl;
          //  func3(x, y, z);
          //  cout << x << " " << y << " " << z << endl;
          //  return 0;
       // }
       // void func1(int &a, int &b)
       // {
         //   cout << "Enter two numbers: ";
         //   cin >> a >> b;
       // }
       // void func2(int &a, int &b, int &c)
      //  {
        //    b++;
          //  c−−;
          //  a = b + c;
      //  }
      //  void func3(int a, int b, int c)
       // {
         //   a = b − c;
        

      /*  #include <iostream>
        #include <cstdlib>
        using namespace std;

        void showVals(double, double);

        int main()
        {
            double x = 1.2, y = 4.5;
            showVals(x, y);
            return 0;
        }
        void showVals(double p1, double p2)
        {
            cout << p1 << endl;
            exit(0);
            cout << p2 << endl;
        } */

    

        #include <iostream>
        using namespace std;

        int manip(int);
        int manip(int, int);
        int manip(int, double);

        int main()
        {
            int x = 2, y= 4, z;
            double a = 3.1;
            z = manip(x) + manip(x, y) + manip(y, a);
            cout << z << endl;
            return 0;
        }
        int manip(int val)
        {
            return val + val * 2;
        }
        int manip(int val1, int val2)
        {
            return (val1 + val2) * 2;
        }
        int manip(int val1, double val2)
        {
            return val1 * static_cast<int>(val2);
        }