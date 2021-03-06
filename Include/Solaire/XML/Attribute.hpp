#ifndef SOLAIRE_XML_ATTRIBUTE_HPP
#define SOLAIRE_XML_ATTRIBUTE_HPP

//Copyright 2015 Adam Smith
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

// Contact :
// Email             : solairelibrary@mail.com
// GitHub repository : https://github.com/SolaireLibrary/SolaireCPP

/*!
	\file Attribute.hpp
	\brief
	\author
	Created			: Adam Smith
	Last modified	: Adam Smith
	\version 1.0
	\date
	Created			: 19th January 2016
	Last Modified	: 19th January 2016
*/

#include "Solaire/Data/CString.hpp"

namespace Solaire {

    class Attribute {
    private:
        CString mName;
        CString mValue;
    public:
        Attribute() throw();
        Attribute(Allocator&) throw();
        Attribute(const StringConstant<char>&) throw();
        Attribute(const StringConstant<char>&, const StringConstant<char>&) throw();
        Attribute(const StringConstant<char>&, char) throw();
        Attribute(const StringConstant<char>&, bool) throw();
        Attribute(const StringConstant<char>&, uint8_t) throw();
        Attribute(const StringConstant<char>&, uint16_t) throw();
        Attribute(const StringConstant<char>&, uint32_t) throw();
        Attribute(const StringConstant<char>&, uint64_t) throw();
        Attribute(const StringConstant<char>&, int8_t) throw();
        Attribute(const StringConstant<char>&, int16_t) throw();
        Attribute(const StringConstant<char>&, int32_t) throw();
        Attribute(const StringConstant<char>&, int64_t) throw();
        Attribute(const StringConstant<char>&, float) throw();
        Attribute(const StringConstant<char>&, double) throw();

        String<char>& getName() throw();
        const String<char>& getName() const throw();
        void setName(const StringConstant<char>&) throw();

        String<char>& getValue() throw();
        const String<char>& getValue() const throw();
        void setValue(const StringConstant<char>&) throw();

        Allocator& getAllocator() const throw();
    };
}

#endif
