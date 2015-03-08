//
//  PlayingCard.h
//  Matchismo
//
//  Created by Jesse Xu on 8/16/14.
//  Copyright (c) 2014 Xu. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong,nonatomic)NSString *suit;
@property (nonatomic) NSUInteger rank;
+(NSUInteger)maxRank;
//+(NSArray*)rankStrings;
+(NSArray *)validSuits;
@end
