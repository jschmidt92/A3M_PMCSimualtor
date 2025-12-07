class Params {
    class DTimer {
        //paramsArray select 0
        title = "Payout Multiplier (Personal Accounts)";
        values[] = {0.5, 1, 2, 3};
        texts[] = {"Half of Rating Points (Subtraction)", "No Multiplier", "Double", "Triple"};
        default = 2;
    };
    class OpBudget {
        //paramsArray select 1
        title = "Operation Budget:";
        values[] = {0, 1, 5000000, 12000000, 25000000, 50000000, 75000000, 120000000};
        texts[] = {"Broke", "A3M Persist (From Previous Session)", "5 Million", "12 Million", "25 Million", "50 Million", "75 Million", "120 Million"};
        default = 12000000;
    };
    class RBLength {
        // paramsArray select 2
        title = "Roadblock Shift Length:";
        values[] = {10, 15, 20, 25, 30};
        texts[] = {"Ten Cars", "Fifteen Cars", "Twenty Cars", "Twenty Five Cars", "Thirty Cars"};
        default = 10;
    };
    class DeliveryTime {
        // paramsArray select 3
        title = "Online Order Delivery Time:";
        values[] = {10, 30, 60, 120, 180, 240, 300};
        texts[] = {"10 Seconds", "30 Seconds", "1 Minute", "2 Minutes", "3 Minutes", "4 Minutes", "5 Minutes"};
        default = 10;
    };
    class FuelCost {
        // paramsArray select 4
        title = "Gas Prices (Cost Per Gallon - Vehicle Refuelling):";
        values[] = {2, 4, 6, 7, 8, 10, 12};
        texts[] = {"$2.00 / Gallon", "$4.00 / Gallon", "$6.00 / Gallon", "$8.00 / Gallon", "$10.00 / Gallon", "$12.00 / Gallon", "$14.00 / Gallon"};
        default = 2;
    };
    class RepairPrice {
        // paramsArray select 5
        title = "Repair / Labor Prices (Multiplier - Vehicle Repair):";
        values[] = {20, 40, 60, 70, 80, 100, 120};
        texts[] = {"$20.00 / Hr", "$40.00 / Hr", "$60.00 / Hr", "$80.00 / Hr", "$100.00 / Hr", "$120.00 / Hr", "$140.00 / Hr"};
        default = 20;
    };
    class JetFuelCost {
        // paramsArray select 6
        title = "Jet Fuel (Cost Per LB - Aircraft Refuelling):";
        values[] = {8, 10, 12, 15, 17, 20, 25};
        texts[] = {"$8.00 / Lb", "$10.00 / Lb", "$12.00 / Lb", "$15.00 / Lb", "$17.00 / Lb", "$20.00 / Lb", "$25.00 / Lb"};
        default = 8;
    };
    class DefaultRecruiting {
        // paramsArray select 7
        title = "Allow AIRecruit rights to any player";
        values[] = {1, 0};
        texts[] = {"Yes", "No"};
        default = 0;
    };
    class InsuranceDeductible {
        // paramsArray select 8
        title = "Medical Insurance Deductible (Cost for respawning)";
        values[] = {0,100,200,300,400,500};
        texts[] = {"Off ($0.00)","$100.00", "$200.00", "$300.00", "$400.00", "$500.00"};
        default = 200;
    };
};
