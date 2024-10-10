#include<iostream>
using namespace std;
class circle
    {
        private:
            int radius;
        public:
            circle()
            {
                cout << "Inside Constractor 1" <<endl;
                radius=0;
            }
            circle(int r)
            {
                cout << "Inside Constractor 2" << endl;
                
            }
            void setradius(int r)
            {
                radius = r;
            }
            int getradius()
            {
                return radius;
            }
            float getarea()
            {
                float area;
                area=3.1416*(radius*radius);
                return (area);
            }


    };
int main()
{
    circle c(3),d(4),e;
    e.setradius(3);
    cout << e.getradius() <<endl;
    cout << "Area= " << e.getarea() << endl;
    cout << "End of the Program..." << endl;
    return 0;
}