//
//  HelloWorldLayer.h
//  CCSlider
//
//  Created by Ngo Duc Hiep on 5/4/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "CCSlider.h"

// HelloWorld Layer
@interface HelloWorld : CCLayer
{
	CCSprite *bg;
}

// returns a Scene that contains the HelloWorld as the only child
+(id) scene;

@end
