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
 * @brief  Faz uma rotação à esquerda dos elementos no range recebido transformando o n_first em 1º elemento e n_first-1 no ultimo
 * 
 * @tparam ForwardIt iterator para o range
 * 
 * @param first Ponteiro apontando para o inicio do range
 * @param n_first Ponteiro apontando para o elemento inicial após rotação
 * @param last Ponteiro apontando para o "fim" do range
 * 
 * @return ForwardIt iterator para a posição onde se encontra o primeiro elemento do range antes da rotação
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    // TODO
    std::vector<int> v1;
    std::vector<int> v2;
    int count=0;
    bool key = false;
    for(int i{0};i<last-first;i++){
        if(*(first+i)==*n_first||key==true){
            v2.push_back(*(first+i));
            key = true;
        }else{
            v1.push_back(*(first+i));
            count++;
        }
    }
    for(int i{0};i<v1.size();i++){
        v2.push_back(v1[i]);   
    }
    for(int i{0};i<v2.size();i++){
        *(first+i) = v2[i];
    }
    std::cout << std::endl;

    return first+v2.size()-v1.size();
}

}
#endif
