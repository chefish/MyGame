//
//  Ppp.hpp
//  MyGame-desktop
//
//  Created by 余晓敏 on 2019/2/19.
//

#ifndef __CACA_SCENE_H__
#define __CACA_SCENE_H__

#include <stdio.h>
#include "cocos2d.h"

class CacaScene : public cocos2d::Scene
{
public:
    virtual bool init() override;
    
    static cocos2d::Scene* scene();
    
    // a selector callback
    void menuCloseCallback(Ref* sender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(CacaScene);
};
#endif /* Ppp_hpp */
