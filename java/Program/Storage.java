class Storage {

    private String kapasitas;
    private String tipe;

    public Storage(String kapasitas, String tipe) {
        this.kapasitas = kapasitas;
        this.tipe = tipe;
    }

    public String getKapasitas() {
        return kapasitas;
    }

    public String getTipe() {
        return tipe;
    }

    public void setKapasitas(String kapasitas) {
        this.kapasitas = kapasitas;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }
}