class Desktop extends Komputer {

    private String casing;
    private String psu;

    public Desktop(String merek, String model, String casing, String psu) {
        super(merek, model);

        this.casing = casing;
        this.psu = psu;
    }

    public String getCasing() {
        return casing;
    }

    public String getPsu() {
        return psu;
    }

    public void setCasing(String casing) {
        this.casing = casing;
    }

    public void setPsu(String psu) {
        this.psu = psu;
    }
}