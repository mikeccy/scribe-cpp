//
//  OAuthService.h
//  scribe-cpp
//
//  Created by mikeccy on 2/14/13.
//  Copyright (c) 2013 mikeccy. All rights reserved.
//

#ifndef scribe_cpp_OAuthService_h
#define scribe_cpp_OAuthService_h

#include <string>

#include "../model/Token.h"
#include "../model/Verifier.h"
#include "../model/OAuthRequest.h"

/**
 * OAuthService Interface
 * The main Scribe object.
 *
 * A facade responsible for the retrieval of request and access tokens and for the        signing of HTTP requests.
 *
 * @author Chongyu Chen
 */
class OAuthService {
    virtual ~OAuthService() {};
    
    /**
     * Retrieve the request token.
     *
     * @return request token
     */
    virtual Token getRequestToken() = 0;
    
    /**
     * Retrieve the access token
     *
     * @param requestToken request token (obtained previously)
     * @param verifier verifier code
     * @return access token
     */
    virtual Token getAccessToken(Token requestToken, Verifier verifier) = 0;
    
    /**
     * Signs am OAuth request
     *
     * @param accessToken access token (obtained previously)
     * @param request request to sign
     */
    virtual void signRequest(Token accessToken, OAuthRequest request) = 0;
    
    /**
     * Returns the OAuth version of the service.
     *
     * @return oauth version as string
     */
    virtual std::string getVersion() = 0;
    
    /**
     * Returns the URL where you should redirect your users to authenticate
     * your application.
     *
     * @param requestToken the request token you need to authorize
     * @return the URL where you should redirect your users
     */
    virtual std::string getAuthorizationUrl(Token requestToken) = 0;
};

#endif
