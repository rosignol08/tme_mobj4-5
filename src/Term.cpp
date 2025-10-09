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
        //return this->node_; erreur ici TODO
    }
    Net*                   Term::getNet          ()const{
        return this->net_;
    }
    Cell*                  Term::getCell         ()const{
        //return this-> trouver un moyen d'avoir la cell TODO
    }
    Cell*                  Term::getOwnerCell    ()const{
        //faut appeler la fontion de net peut etre ?
    }
    Instance*              Term::getInstance     ()const{

    }
    Point                   Term::getPosition     ()const{
        //return this->direction_ je sait pas
    }
    void                    Term::setNet          ( Net * ){

    }
    void                    Term::setNet          ( const std::string& ){

    }
    void                    Term::setPosition     ( const Point& ){

    }
    void                    Term::setPosition     ( int x , int y ){

    }
    //Type                    getType         () const ;
    //Direction               getDirection    ();
    //void                    setDirection    ( Direction );

}