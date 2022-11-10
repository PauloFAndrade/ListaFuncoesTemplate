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
 * @brief  Verifica se todos os elementos do range [first1,last1) são iguais aos do range [first2, first2+(last1-first1))
 * 
 * @tparam InputIt1 iterator para o range 1 
 * @tparam InputIt2 iterator para o range 2
 * @tparam Equal o tipo de uma função bool eq( const Type &a, const Type &b)
 * 
 * @param first1 Ponteiro apontando para o inicio do range 1
 * @param last1 Ponteiro apontando para o "fim" do range 1
 * @param first2 Ponteiro apontando para o inicio do range 2
 * @param eq  uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 * 
 * @return true caso todos os elementos do range 1 forem iguais ao do range 2 
 * @return false caso algum elemento não seja igual
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    // TODO
    while(first1!=last1){
        if(!eq(*first1,*first2)){
            return false;
        }
        ++first1;
        ++first2;
    }
    return true;
}


/**
 * @brief  Verifica se todos os elementos do range [first1,last1) são iguais aos do range [first2,last2)
 * 
 * @tparam InputIt1 iterator para o range 1 
 * @tparam InputIt2 iterator para o range 2
 * @tparam Equal o tipo de uma função bool eq( const Type &a, const Type &b)
 * 
 * @param first1 Ponteiro apontando para o inicio do range 1
 * @param last1 Ponteiro apontando para o "fim" do range 1
 * @param first2 Ponteiro apontando para o inicio do range 2
 * @param last2 Ponteiro apontando para o "fim" do range 2
 * @param eq  uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 * 
 * @return true caso todos os elementos do range 1 forem iguais ao do range 2 
 * @return false caso algum elemento não seja igual 
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    // TODO
    if((last1-first1)>(last2-first2)){
        return false;
    }
    while(first2!=last2){
        if(!eq(*first1,*first2)){
            return false;
        }
        ++first1;
        ++first2;
    }
    return true;
}

}
#endif
