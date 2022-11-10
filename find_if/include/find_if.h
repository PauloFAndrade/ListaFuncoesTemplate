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
 * @brief Função que verifica se existe um elemento em que o predicado é verdadeiro
 * 
 * @tparam InputIt Iterator para o range
 * @tparam UnaryPredicate tipo de uma função bool all_of ( Itr first , Itr last , Predicate p );
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 * 
 * @return InputIt Iterator apontando para o elemento com predicado verdadeiro ou para o "fim" do range 
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    while(first!=last){
        if(p(*first)){
            return first;
        }
        ++first;
    }
    return last;
}

}
#endif
