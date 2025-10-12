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
    size_t Net::getFreeNodeId() const {
        //on doit trouver l'index de la première case libre dans le tableau 
        //si aucune case n'est libre, elle renverra la taille du tableau,
        //c'est à dire l'index situé immédiatement après le dernier élément
        for (size_t i = 0; i < nodes_.size(); ++i) {
            if (nodes_[i] == nullptr) {
                return i;
            }
        }
        //pas de case libre return size du tab
        return nodes_.size();
    }
    void Net::add(Node * node){
        this->nodes_.push_back(node);
    }
    bool Net::remove(Node * node){
        for(size_t i = 0; i < this->nodes_.size(); i++){
            if(this->nodes_[i] == node){
                this->nodes_.erase(this->nodes_.begin()+i);
                return true;
            }
        }
        return false;

    }
    //const std::vector<Node *> &
    //getNodes();
}
