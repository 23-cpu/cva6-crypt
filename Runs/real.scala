// Digital Systems Configuration - Configure the system itself
// Chip IO configuration - How the system interracts with the outside world
// Harness Configuration - What blocks in the outside world interract with the system

class CustomConfig extends Config(

    // Digital System Configuration

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

    // I/O Configuration / I/O Binders

    new WithIOCellModels ++

    // Harness Configuration - How the outside world talks the system

    new WithDRAMSim ++
    new WithSimUART ++
    new WithSimJTAG ++
    new WithSimSerial

)

