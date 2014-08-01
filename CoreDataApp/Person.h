//
//  Person.h
//  CoreDataApp
//
//  Created by Timothy Wright on 8/9/13.
//  Copyright (c) 2013 MAG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * fName;
@property (nonatomic, retain) NSString * lName;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) id favoriteColor;

@end
