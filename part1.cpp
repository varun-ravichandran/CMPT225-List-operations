#include <iostream>
#include "Vector.h"
#include "List.h"
#include <time.h>
#include <string>       

using namespace std;


double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

template<typename T>
void visitall(List<T>& list_visit){
    // random work
    auto list_t = list_visit.begin();
    for(; list_t != list_visit.end(); list_t++){
        
    }
}

template<typename T>
void visitall(Vector<T>& vec_visit){
    // random work
    for(int i = 0; i < vec_visit.size(); i++){
        vec_visit[i] *= 7;
    }
}

int main(int argc, const char* argv[]){
    const int NUM_SIZE = 10000;
    cout << "Type of Element: int" << endl;
    cout << "Number of Elements: " << NUM_SIZE << endl;
    cout << "Time units: milliseconds"<< endl;
    clock_t start_time, end_time;
    start_time = clock();
    Vector<float> var_vec(NUM_SIZE); // vector.h construction
    end_time = clock();
    double time_taken = elapsed_time(start_time, end_time);

    cout << "Time for Vector Insertion: " << to_string(time_taken) << " ms" <<endl;
    
    start_time = clock();
    List<float> var_list;
    for(int i = 0; i < NUM_SIZE; i++){ // initilization of List
        var_list.push_back(i);
    }
    end_time = clock();
    time_taken = elapsed_time(start_time, end_time);
    cout << "Time for List Insertion: " << to_string(time_taken)<< " ms" << endl;

    start_time = clock();
    visitall(var_vec);
    end_time = clock();
    time_taken = elapsed_time(start_time, end_time);
    cout << "Time for Vector Visiting: " << to_string(time_taken)<< " ms" << endl;

    start_time = clock();
    visitall(var_list);
    end_time = clock();
    time_taken = elapsed_time(start_time, end_time);
    cout << "Time for List Visiting: " << to_string(time_taken)<< " ms" << endl;

    return 0;
}


