//#include "methodOfSimpleIteration.hpp"
//
////vector<double> results;
//
//namespace simpleIteration{
////#define TAU
//    double results[100];
//    double tau;
//    double e = 10 ^ (-5);
//    double f(double results) {
//        return 4 * results - 8 * sin(results) + 1;
//    }
//    void funX_I(){
//        cout << "Введите x0" << endl;
//        cin>>results[0];
//        for (int i = 0; i < 100; ++i) {
//            while((abs(results[i+1] - results[i]) >= e)^(abs(f(results[i+1])) >= e)){
//                results[i+1] = results[i] + tau* f(results[i]);
//            }
//        }
//    }
//}