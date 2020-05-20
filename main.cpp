#include <iostream>
#include <fstream>
using namespace std;
int main()
{
        ifstream wej;
        ofstream wyj;
        wej.open("wej.txt");
        wyj.open("wyj.txt");
        int c = 0;
        int a[1000];
        if (wej.good()) 
		{
            while (!wej.eof()) 
			{
                wej >> a[c++];
            }
        }
        else { cout << "Tekst"; }
        if (wyj.good())
		{
            for (int i = c - 2; i >= 0; i--)
			{
                cout << a[i];
                wyj << a[i] << " ";
            }
        }
        else { cout << "Tekst2"; }
        wej.close();
        wyj.close();

        return 0;
}
