//
//  Verifier.h
//  scribe-cpp
//
//  Created by mikeccy on 2/15/13.
//  Copyright (c) 2013 mikeccy. All rights reserved.
//

#ifndef __scribe_cpp__Verifier__
#define __scribe_cpp__Verifier__

#include <string>

/**
 * Represents an OAuth verifier code.
 *
 * @author Chongyu Chen
 */
class Verifier
{
public:
    
    /**
     * Default constructor.
     *
     * @param value verifier value
     */
    Verifier(const std::string& _value) : value(_value)
    {
    }
    
    const std::string getValue();
    
private:
    const std::string value;
};

#endif /* defined(__scribe_cpp__Verifier__) */
