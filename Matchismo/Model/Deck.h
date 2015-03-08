//
//  Deck.h
//  Matchismo
//
//  Created by Jesse Xu on 8/16/14.
//  Copyright (c) 2014 Xu. All rights reserved.
//

#import "Card.h"

@interface Deck : Card
-(void)addCard:(Card *) card atTop: (BOOL)atTop;
-(void)addCard:(Card *) card;
-(Card *) drawRandomCard;
@end
