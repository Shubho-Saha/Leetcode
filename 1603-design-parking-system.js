class ParkingSystem  {
    constructor(small, medium, big) {
        this.big = big;
        this.medium = medium;
        this.small = small;
    }

    addCar(size) {
        if (size === 3) {
            if (this.big > 0){
                this.big--;
                return true;
            } else return false;
        } 
        if (size === 2) {
            if (this.medium > 0) {
                this.medium--;
                return true;
            } else return false;
        }

        if (size === 1) {
            if (this.small > 0) {
                this.small--;
                return true;
            } else return false;
        }
    }
};