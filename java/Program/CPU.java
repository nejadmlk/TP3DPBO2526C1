class CPU {

    private String merek;
    private String model;
    private String kecepatan;

    public CPU(String merek, String model, String kecepatan) {
        this.merek = merek;
        this.model = model;
        this.kecepatan = kecepatan;
    }

    public String getMerek() {
        return merek;
    }

    public String getModel() {
        return model;
    }

    public String getKecepatan() {
        return kecepatan;
    }

    public void setMerek(String merek) {
        this.merek = merek;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setKecepatan(String kecepatan) {
        this.kecepatan = kecepatan;
    }
}