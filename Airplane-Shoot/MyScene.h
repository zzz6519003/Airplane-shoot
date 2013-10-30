//
//  MyScene.h
//  Airplane-Shoot
//

//  Copyright (c) 2013年 zzz. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <CoreMotion/CoreMotion.h>

@interface MyScene : SKScene <UIAccelerometerDelegate, SKPhysicsContactDelegate>
 {
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

@property SKEmitterNode *smokeTrail;

@property NSMutableArray *explosionTextures;
@property NSMutableArray *cloudsTextures;


@end

static const uint8_t bulletCategory = 1;
static const uint8_t enemyCategory = 2;
static const uint8_t powerUpCategory = 3;
static const uint8_t planeCategory = 4;

