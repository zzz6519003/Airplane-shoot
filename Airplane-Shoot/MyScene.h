//
//  MyScene.h
//  Airplane-Shoot
//

//  Copyright (c) 2013年 zzz. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <CoreMotion/CoreMotion.h>

@interface MyScene : SKScene {
    CGRect screenRect;
    CGFloat screenHeight;
    CGFloat screenWidth;
    double currentMaxAccelX;
    double currentMaxAccelY;

}

@property (nonatomic, strong) SKSpriteNode *plane;

@property SKSpriteNode *planeShadow;

@property SKSpriteNode *propeller;


@property (strong, nonatomic) CMMotionManager *motionManager;

@end
