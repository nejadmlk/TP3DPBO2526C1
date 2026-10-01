class Laptop extends Komputer {

    private String layar;
    private String baterai;

    public Laptop(String merek, String model, String layar, String baterai) {
        super(merek, model);

        this.layar = layar;
        this.baterai = baterai;
    }

    public String getLayar() {
        return layar;
    }

    public String getBaterai() {
        return baterai;
    }

    public void setLayar(String layar) {
        this.layar = layar;
    }

    public void setBaterai(String baterai) {
        this.baterai = baterai;
    }
}