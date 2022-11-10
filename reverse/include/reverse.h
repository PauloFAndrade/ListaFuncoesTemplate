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
 * @brief Função que inverte a ordem de cada elemento em um range [first, last)
 * 
 * @tparam BidirIt Iterator para o Range
 * 
 * @param first Ponteiro apontando para o inicio do range
 * @param last Ponteiro apontando para o "fim" do range
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    // TODO
    int inicio = 0;
    int fim = last - first - 1;

    for(inicio,fim;inicio<fim;inicio++,fim--){
        std::swap(*(first+inicio),*(first+fim));
    }
}

}
#endif
