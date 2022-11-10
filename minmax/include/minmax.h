#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    // TODO
    int tam = last-first;
    int menor = *first;
    int maior = *first;
    int indMe=0,indMa=0,aux = 0;
    while(first!=last){
        if(cmp(*first,menor)){
            menor = *first;
            indMe = aux;
        }
        if(cmp(maior,*first) || maior==*first){
            maior = *first;
            indMa = aux;
        }
        ++first;
        aux++;
    }
    if(tam==0){
        return std::make_pair( first, first );
    }else{
        return std::make_pair(last-tam+indMe,last-tam+indMa);
    }
}

}
#endif
