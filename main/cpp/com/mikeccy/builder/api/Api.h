//
//  Api.h
//  scribe-cpp
//
//  Created by mikeccy on 2/14/13.
//  Copyright (c) 2013 mikeccy. All rights reserved.
//

#ifndef scribe_cpp_Api_h
#define scribe_cpp_Api_h

#include "../../oauth/OAuthService.h"
#include "../../model/OAuthConfig.h"

/**
 * Api Interface
 * Contains all the configuration needed to instantiate a valid {@link OAuthService}
 *
 * @author Chongyu Chen
 *
 */
class Api
{
public:
    virtual ~Api() {};
    
    /**
     * Creates an {@link OAuthService}
     *
     * @param apiKey your application api key
     * @param apiSecret your application api secret
     * @param callback the callback url (or 'oob' for out of band OAuth)
     * @param scope the OAuth scope
     *
     * @return fully configured {@link OAuthService}
     */
    virtual OAuthService createService(OAuthConfig config) = 0;
};

#endif