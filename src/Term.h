#ifndef TERM_H
#define TERM_H

// #pragma once
// #include "Point.h"
// #include "Net.h"
// #include "Instance.h"
#include "Cell.h"
#include "Node.h"

namespace Netlist {
    class Term{
        public:
            enum Type       { Internal=1, Externa=2 };
            enum Direction  { In=1, Out=2, Inout=3, Tristate=4, Transcv=5, Unkown=6 };
                                    Term            ( Cell* , const std :: string & name , Direction );
                                    Term            ( Instance * , const Term * modelTerm );
                                    ~Term          (){};
            bool                    isInternal      () const ;
            bool                    isExternal      () const ;
            const std::string &     getName         () const ;
            Node*                   getNode         ();
            Net*                    getNet          () const ;
            Cell*                   getCell         () const ;
            Cell*                   getOwnerCell    () const ;
            Instance*               getInstance     () const ;
            Direction               getDirection    () const ;
            Point                   getPosition     () const ;
            Type                    getType         () const ;
            void                    setNet          ( Net * );
            void                    setNet          ( const std::string& );
            void                    setPosition     ( const Point& );
            void                    setPosition     ( int x , int y );
            void                    setDirection    ( Direction );
        private:
            void*           owner_;
            std::string     name_;
            Direction       direction_;
            Type            type_;
            Net*            net_;
            Node            node_;
    };
}
#endif