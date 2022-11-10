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
 * @brief Função para verificar se o predicado p é verdadeiro para todos os elementos do range
 * 
 * @tparam InputIt iterator para o range
 * @tparam UnaryPredicate tipo de uma função bool all_of ( Itr first , Itr last , Predicate p );
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 *  
 * @return true 
 * @return false 
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    if(first-last==0){
        return false;
    }
    while(first!=last){
        if(p(*first)==false){
            return false;
        }
        ++first;
    }
    return true;
}

/**
 * @brief Função que retorna true quando o predicado p é verdadeiro para pelo menos um elemento do range
 * 
 * @tparam InputIt iterator para o range
 * @tparam UnaryPredicate tipo de uma função bool all_of ( Itr first , Itr last , Predicate p );
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 * 
 * @return true 
 * @return false 
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    while(first!=last){
        if(p(*first)==true){
            return true;
        }
        ++first;
    }
    return false;
}

/**
 * @brief Função que retorna verdadeiro se o predicado p é falso para todos os elementos no range
 * 
 * @tparam InputIt iterator para o range
 * @tparam UnaryPredicate tipo de uma função bool all_of ( Itr first , Itr last , Predicate p );
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 * 
 * @return true 
 * @return false 
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    while(first!=last){
        if(p(*first)==true){
            return false;
        }
        ++first;
    }
    return true;
}

}
#endif
