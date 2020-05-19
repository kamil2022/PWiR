#include <iostream>
#include <omp.h>
using namespace std;

int main () {
    //omp_set_num_threads(6);
    cout << omp_get_num_threads() << endl;
    #pragma omp parallel 
    {
        if (omp_get__thread_num() == 0) cout << omp_get_num_threads() << endl;
        int ID = omp_get_thread_num();
        cout << "Watek nr " <<  ID  << endl;
    }
}