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
 * @brief Função para ordenar os elementos
 * 
 * @tparam ForwardIt iterator para o range
 * @tparam Comparison o tipo de uma função bool(const T &a, const T &b)
 * 
 * @param first Ponteiro apontando para o inicio do range
 * @param last Ponteiro apontando para o "fim" do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo 
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    // TODO
    int aux,temp;
    for(int i{0};i<last-first;i++){
        aux = i;
        for(int j{i+1};j<last-first;j++){
            if(cmp(*(first+j),*(first+aux))){
                aux = j;
                temp = *(first+aux);
                *(first+aux) = *(first+i);
                *(first+i) = temp;
            }
        }
    }
}

}
#endif
