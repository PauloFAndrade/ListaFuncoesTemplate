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
 * @brief Reordena o range para que os elementos que satisfazem um determinado predicado fiquem antes de elementos cujo mesmo predicado não seja satisfeito
 * 
 * @tparam ForwardIt Iterator para o Range
 * @tparam UnaryPredicate tipo de uma função bool all_of ( Itr first , Itr last , Predicate p );
 * 
 * @param first Ponteiro apontando para o inicio do range
 * @param last Ponteiro apontando para o "fim" do range 
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 * 
 * @return ForwardIt Iterator apontando para o elemento logo após o último elemento no range reordenado que satisfaz o predicado
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    // TODO
    int aux=0;

    for(int i{0};i<(last-first);i++){
        if(p(*(first+i))){
            std::swap(*(first+aux),*(first+i));
            aux++;
        }
    }

    if(aux!=0){
        return first+aux;
    }
    
    return first;
}

}
#endif
