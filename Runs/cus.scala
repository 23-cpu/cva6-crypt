class CustomConfig extends Config(
    new WithL1CacheWays(4) ++
    new WithAsyncTiles ++
    new WithSystemBusWidth(128) +
    new WithFPGemmini ++
    new With3WideBooms ++
    new WithL2TLBs(512) ++
    new WITHL2Sets(1024) ++

    new WithDefaultGemmini ++
    new WithNRocketCores(1) ++
    new WithNBoomCores(1) ++
    new WithBootROM ++
    new WithUART ++
    new WithJtagDTM ++
    new WithGPIOs ++
    new WithInclusiveCache(512) ++

)
