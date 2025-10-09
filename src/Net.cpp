#include "Net.h"

using namespace std;

namespace Netlist
{
    Cell *getCell();
    const std::string &Net::getName()const{
        return this->name_;

    }
    unsigned int Net::getId()const{
        return this->id_;
        
    }
    Term::Type Net::getType()const{
        return this->type_;

    }
    Node *Net::getNode(size_t id)const{
        return this->nodes_[id];
    }
    size_t Net::getFreeNodeId()const{
        //on doit trouver l'index de la première case libre dans le tableau 
        //si aucune case n'est libre, elle renverra la taille du tableau,
        //c'est à dire l'index situé immédiatement après le dernier élément TODO
        size_t i = 0;
        while(getNode(i) != nullptr){
            i++;//pas la bonne façon de faire TODO
        }/*
        if()//check si on a une case libre
        {
            return this->nodes_[i].noid; l'id de la case
        }
        else{
            return i;
        }
            */
    }
    void Net::add(Node *){
        //this->nodes_.push_back(Node*)//faut voir si on doit pas  donner une variable ici et à remove
    }
    bool Net::remove(Node *){

    }
    //const std::vector<Node *> &
    //getNodes();
}
