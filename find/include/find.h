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
 * @brief Função que busca um elemento no range que seja igual ao value procurado
 * 
 * @tparam InputIt iterator para o range
 * @tparam T tipo do valor procurado
 * @tparam Equal o tipo de uma função bool eq( const Type &a, const Type &b)
 * 
 * @param first Ponteiro apontando para o inicio do range principal
 * @param last Ponteiro apontando para o "fim" do range principal 
 * @param value Valor para comparar os elementos do range
 * @param eq uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 * 
 * @return InputIt iterator apontando para o primeiro elemento do range igual ao value ou o "fim" do range
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    // TODO
    while(first!=last){
        if(eq(*first,value)){
            return first;
        }
        ++first;
    }
    return last;
}

}
#endif
