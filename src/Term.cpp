#include "Term.h"

using namespace std;

namespace Netlist{
    bool                    Term::isInternal      ()const{
        if(this->type_ == 1){
            return true;
        }else if(this->type_ == 2)
        {
            return false;
        }

    }
    bool                    Term::isExternal      ()const{
     if(this->type_ == 2){
            return true;
        }else if(this->type_ == 1)
        {
            return false;
        }

    }
    const std::string &   Term::getName         () const{
        return this->name_;
    }
    Node*                  Term::getNode         (){
        return &this->node_;
    }
    Net*                   Term::getNet          ()const{
        return this->net_;
    }
    Cell*                  Term::getCell         ()const{
        return (owner_ && !isExternal()) ? static_cast<Cell*>(owner_) : nullptr;
    }
    Cell*                  Term::getOwnerCell    ()const{
        //faut appeler la fontion de net peut etre ?
    }
    Instance*              Term::getInstance     ()const{
        return (owner_ && isExternal()) ? static_cast<Instance*>(owner_) : nullptr;//checker ça

    }
    Point                   Term::getPosition     ()const{
        return node_.getPosition();
    }
    void                    Term::setNet          ( Net * net ){
        this->net_ = net;
    }
    void                    Term::setNet          ( const std::string& netnom){
        this->net_ = getCell()->getNet(netnom);

    }
    void                    Term::setPosition     ( const Point& point){
        node_.setPosition(point);
    }
    void                    Term::setPosition     ( int x , int y ){
        node_.setPosition(x,y);
    }
    //Type                    getType         () const ;
    //Direction               getDirection    ();
    //void                    setDirection    ( Direction );

}