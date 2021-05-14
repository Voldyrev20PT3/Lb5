#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string file_data;
    ifstream f("file_1");
    if (f.good()){
        f >> file_date;
        }
        f.close();
        ofstream ff ("file2", ios::app);
        if (f.good()){
            ff<<file_data;
        }
        ff.close();
        return 0;
        
}
