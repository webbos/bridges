//
//  Level.h
//  bridges2
//
//  Created by Zack Grossbart on 9/1/12.
//
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "LayerMgr.h"

@interface Level : NSObject {

    
}

-(id) initWithJson:(NSString*) jsonString: (NSDate*) date;
-(void) addSprites: (LayerMgr*) layerMgr:(UIView*) view;
-(void) removeSprites:(LayerMgr*) layerMgr;
-(bool)hasWon;
-(NSArray*) controls;
-(bool)hasCoins;

@property (readonly) NSMutableArray *rivers;
@property (readonly) NSMutableArray *bridges;
@property (readonly) NSMutableArray *bridge4s;
@property (readonly) NSMutableArray *houses;
@property (readonly) NSMutableArray *labels;
@property (readonly, copy) NSDictionary *levelData;

@property (readonly) NSString *name;
@property (readonly) NSDate *date;
@property (readonly) NSString *levelId;
@property (readonly) CGPoint playerPos;

@property (readonly) LayerMgr *layerMgr;

@end


