/**
 * Axway Titanium
 * Copyright (c) 2009-present by Axway Appcelerator. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import <CoreNFC/CoreNFC.h>
#import <TitaniumKit/TitaniumKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TiNDEFTagTechnology : TiProxy {
  id<NFCNDEFTag> _ndefTag;
}

- (id)_initWithPageContext:(id<TiEvaluator>)context andNDEFTag:(id<NFCNDEFTag>)ndefTag;

- (id<NFCNDEFTag>)ndefTag;

@end

NS_ASSUME_NONNULL_END