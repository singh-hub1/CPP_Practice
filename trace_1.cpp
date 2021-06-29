#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "object created" << endl;
    }
    ~A()
    {
        cout << "object is destroyed" << endl;
    }
};
A a1;

//object created
//object is destroyed

int main()
{
    A a2; //object created
    {
        A a3;
        //object created
        //object is destroyed
    }

    exit(0);
    //return 0;
}

/*   EXIT(0)

object created     
object created     
object created     
object is destroyed
object is destroyed
*/



/*    RETURN 0

object created     
object created     
object created     
object is destroyed
object is destroyed
object is destroyed

*/
