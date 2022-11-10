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
 * @brief Função que recebe um range [first,last) e copia os valores do range dentro de um novo range que inicia em d_first
 * 
 * @tparam InputIt iterator para o range
 * 
 * @param first Ponteiro apontando para o inicio do range principal
 * @param last Ponteiro apontando para o "fim" do range principal
 * @param d_first Ponteiro apontando para o primeiro elemento do range cópia
 * 
 * @return InputIt Iterator apontando para o "fim" do range cópia
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    // TODO
    int tam = last - first;
    for(int i{0};i<tam;i++){
        *(d_first+i) = *(first+i);
    }
    return d_first+tam;
}

}
#endif
