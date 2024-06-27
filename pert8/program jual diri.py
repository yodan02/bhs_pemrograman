def main():
    print("=== roses Mencari Pekerjaan ===")
    print("1. menentukan tujuan pekerjaan")
    print("2. menyiapkan CV dan surat lamaran")
    print("3. melamar pekerjaan")
    
    panggilan_wawancara = input("Apakah Anda mendapatkan panggilan wawancara? (ya/tidak): ")
    if panggilan_wawancara.lower() == "ya":
        print("4. persiapan wawancara")
        lulus_wawancara = input("apakah Anda lulus wawancara? (ya/tidak): ")
        if lulus_wawancara.lower() == "ya":
            print("5. negosiasi gaji")
            print("6. mulai bekerja")
        else:
            print("5. evaluasi wawancara")
    else:
        print("4. lakukan follow-up")

    print("7. bagikan pengalaman dan keterampilan")
    print("8. Perbaharui CV dan portofolio")
    print("9. kembangkan keterampilan baru")
    print("10. semoga bener yaa kerja nyaa")
    print("10. selesai")

if __name__ == "__main__":
    main()