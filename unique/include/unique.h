#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/**
 * @brief Função que reordena os elementos no range de forma que elementos no novo range são únicos
 * 
 * @tparam InputIt iterator para o range
 * @tparam Equal o tipo de uma função bool eq( const Type &a, const Type &b)
 * 
 * @param first Ponteiro apontando para o inicio do range principal
 * @param last Ponteiro apontando para o "fim" do range principal 
 * @param eq uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 * 
 * @return InputIt Iterator apontando ou para o endereço logo após o ultimo elemento do range processado ou para o last
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    // TODO

    int v[20]={0};
    
    int aux=0;

    for(int i{0};i<(last-first);i++){
        if(v[*(first+i)]==0){
            *(first+aux) = *(first+i);
            v[*(first+i)]=1;
            aux++;
        }
    }

    if(aux!=0){
        return first+aux;
    }
    
    return last;
}

}
#endif
