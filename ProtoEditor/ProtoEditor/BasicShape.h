//
//  BasicShape.h
//  ProtoEditor
//
//  Created by Bao (Brian) L. LE on 1/18/16.
//  Copyright © 2016 Brian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BasicShape : UIImageView
@property (assign, nonatomic) NSInteger shapeType;

-(void)drawTargetArea:(CGRect)frame;
- (void)drawShape:(CGRect)rect;
@end
