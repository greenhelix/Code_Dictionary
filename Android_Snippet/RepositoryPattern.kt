class ExampleRepository private constructor(context: Context){

    companion object {
        private var INSTANCE : ExampleRepository? = null

        fun initialize(context:Context){
            if(INSTANCE == null){
                INSTANCE = ExampleRepository(context)
            }        
        }

        fun get(): ExampleRepository{
            return INSTANCE?:
            throw IllegalStateException("ExampleRepository must be initialized")
        }
    }
}