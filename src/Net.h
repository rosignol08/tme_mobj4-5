#ifndef NET_H
#define NET_H

#pragma once
#include "Term.h"
#include "Instance.h"
#include <vector>
#include <string>

namespace Netlist {
    class Cell;
    class Node;

    class Net {
        public:
            Net ( Cell*, const std::string & name , Term::Type dir ){
                //ajoute a la liste globale
                
            };
            Net ( Instance* , const std::string & name , Term::Type dir );
            ~Net (){};

        private:
            Net ( const Net & );

        private:
            Cell*               owner_;
            std::string         name_;
            unsigned int        id_;
            Term::Type        type_;
            std::vector<Node*>  nodes_;

        public:
                                //Net( Cell*, const std::string&, Term::Type );
            Cell*               getCell         () const;
            const std::string&  getName         () const;
            unsigned int        getId           () const;
            Term::Type          getType         () const;
            Node*               getNode         ( size_t id ) const;
            const std::vector<Node*>&
                                getNodes        () const;
            size_t              getFreeNodeId   () const;
            void                add             (Node*);
            bool remove (Node*);
    };
}
#endif